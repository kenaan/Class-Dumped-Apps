//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GMSCameraPosition, GMSMapView, GMSMarker, GMSOverlay, NSString, UIView;

@protocol GMSMapViewDelegate <NSObject>

@optional
- (void)mapViewSnapshotReady:(GMSMapView *)arg1;
- (void)mapViewDidFinishTileRendering:(GMSMapView *)arg1;
- (void)mapViewDidStartTileRendering:(GMSMapView *)arg1;
- (void)mapView:(GMSMapView *)arg1 didTapMyLocation:(struct CLLocationCoordinate2D)arg2;
- (_Bool)didTapMyLocationButtonForMapView:(GMSMapView *)arg1;
- (void)mapView:(GMSMapView *)arg1 didDragMarker:(GMSMarker *)arg2;
- (void)mapView:(GMSMapView *)arg1 didEndDraggingMarker:(GMSMarker *)arg2;
- (void)mapView:(GMSMapView *)arg1 didBeginDraggingMarker:(GMSMarker *)arg2;
- (void)mapView:(GMSMapView *)arg1 didCloseInfoWindowOfMarker:(GMSMarker *)arg2;
- (UIView *)mapView:(GMSMapView *)arg1 markerInfoContents:(GMSMarker *)arg2;
- (UIView *)mapView:(GMSMapView *)arg1 markerInfoWindow:(GMSMarker *)arg2;
- (void)mapView:(GMSMapView *)arg1 didTapPOIWithPlaceID:(NSString *)arg2 name:(NSString *)arg3 location:(struct CLLocationCoordinate2D)arg4;
- (void)mapView:(GMSMapView *)arg1 didTapOverlay:(GMSOverlay *)arg2;
- (void)mapView:(GMSMapView *)arg1 didLongPressInfoWindowOfMarker:(GMSMarker *)arg2;
- (void)mapView:(GMSMapView *)arg1 didTapInfoWindowOfMarker:(GMSMarker *)arg2;
- (_Bool)mapView:(GMSMapView *)arg1 didTapMarker:(GMSMarker *)arg2;
- (void)mapView:(GMSMapView *)arg1 didLongPressAtCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mapView:(GMSMapView *)arg1 didTapAtCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)mapView:(GMSMapView *)arg1 idleAtCameraPosition:(GMSCameraPosition *)arg2;
- (void)mapView:(GMSMapView *)arg1 didChangeCameraPosition:(GMSCameraPosition *)arg2;
- (void)mapView:(GMSMapView *)arg1 willMove:(_Bool)arg2;
@end

