//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSMarker;

@interface GMSMarkerRenderInfo : NSObject
{
    shared_ptr_f23710bc _iconHolder;
    struct IconHandle *_iconHandle;
    GMSMarker *_marker;
    double _cameraDistance;
}

@property(readonly, nonatomic) double cameraDistance; // @synthesize cameraDistance=_cameraDistance;
@property(readonly, nonatomic) GMSMarker *marker; // @synthesize marker=_marker;
@property(readonly, nonatomic) struct IconHandle *iconHandle; // @synthesize iconHandle=_iconHandle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithIconHandle:(struct IconHandle *)arg1 marker:(id)arg2 cameraDistance:(double)arg3 iconHolder:(shared_ptr_f23710bc)arg4;

@end

