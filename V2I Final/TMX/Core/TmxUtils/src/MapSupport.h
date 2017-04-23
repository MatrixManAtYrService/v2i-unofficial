/*
 * MapSupport.h
 *
 *  Created on: Apr 21, 2016
 *      Author: ivp
 */

#ifndef SRC_MAPSUPPORT_H_
#define SRC_MAPSUPPORT_H_


#include <iostream>


#include "Conversions.h"
#include "ParsedMap.h"
#include <list>

namespace tmx {
namespace utils {

/**
 * returns information about the strength of a match to a point inside a lane.
 */
class MapMatchResult
{
public:
	MapMatchResult() : LaneNumber (0), IsInLane(false), DistanceMeters (-1){};
	virtual ~MapMatchResult() {};

	///The lane number that had the match.
	int LaneNumber;
	///If the lane that was matched is an egress lane.
	bool IsEgress;
	///If the point was found to be in the lane, based on location and lane width.
	bool IsInLane;
	///Perpendicular distance of the point to the segment line.
	double DistanceMeters;
	///One-Based segment number of the nodes that make up the lane that the point matched to.
	///E.g. if the point matched betwen the first and second nodes of the lane, it would return 1.
	int LaneSegment;
};

class MapSupport {
public:
	MapSupport();
	virtual ~MapSupport();

	/**
	 * Iterates over all vehicle lanes trying to find the current lane of the point.  Returns
	 * laneId -1 if the point cannot be matched to a lane. Returns lane Id 0 if the point is determined to
	 * be within the intersection itself. Returns -2 if the point is outside the map altogether.
	 * @param point  Current location point to evaluate.
	 * @param map  Map data
	 * 	 */
	MapMatchResult FindVehicleLaneForPoint(WGS84Point point, ParsedMap map);

	/**
	 * Does a simple compare of the point's lat/long to the max & min lat long saved from parsing the map.
	 * (Doesn't concern with International Date line, poles, etc., simplified for USA usage.
	 */
	bool IsPointOnMapUsa(WGS84Point point,ParsedMap map);
	/**
	 * Returns the Signal Group Id for the vehicle lane supplied. -1 if not found.
	 */
	int GetSignalGroupForVehicleLane(int laneId, ParsedMap map);
	/**
	 * Returns true if the point is actually within the intersection. False if not.
	 * @param point  Current location point to evaluate.
	 * @param map  Map data
	 */
	bool  IsInCenterOfIntersection(WGS84Point point, ParsedMap map);
/**
 * Compares the point to the lane to find the confidence that the point is within the lane.
 	 * @param point  Current location point to evaluate.
	 * @param lane  Map lane to match to.
 */
	MapMatchResult PointIsInLane(MapLane lane, WGS84Point point);

	/*
	 * Determine if the lane is a vehicle or vehicle computed lane based on the LaneId and the Parsed Map
	 */
	bool IsVehicleLane(int laneId, ParsedMap map);
};

}} // namespace tmx::utils

#endif /* SRC_MAPSUPPORT_H_ */

