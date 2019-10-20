//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESVideoAddEdgeData : NSObject
{
    double _red;
    double _green;
    double _blue;
    long long _addEdgeMode;
    struct CGSize _targetFrameSize;
    struct CGRect _videoFrameRect;
}

+ (id)videoEdgeModeDataFromDic:(id)arg1;
@property(nonatomic) struct CGRect videoFrameRect; // @synthesize videoFrameRect=_videoFrameRect;
@property(nonatomic) long long addEdgeMode; // @synthesize addEdgeMode=_addEdgeMode;
@property(nonatomic) struct CGSize targetFrameSize; // @synthesize targetFrameSize=_targetFrameSize;
@property(nonatomic) double blue; // @synthesize blue=_blue;
@property(nonatomic) double green; // @synthesize green=_green;
@property(nonatomic) double red; // @synthesize red=_red;
- (id)edgeModeDataToDic;
- (id)init;

@end
