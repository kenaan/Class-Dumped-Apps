//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BDSInnerConfig : NSObject
{
    _Bool _bidLogEnable;
    _Bool _enableUploadMaterial;
    _Bool _enableBidLossAhead;
    double _bidRequestExpireTime;
}

@property(nonatomic) _Bool enableBidLossAhead; // @synthesize enableBidLossAhead=_enableBidLossAhead;
@property(nonatomic) _Bool enableUploadMaterial; // @synthesize enableUploadMaterial=_enableUploadMaterial;
@property(nonatomic) double bidRequestExpireTime; // @synthesize bidRequestExpireTime=_bidRequestExpireTime;
@property(nonatomic) _Bool bidLogEnable; // @synthesize bidLogEnable=_bidLogEnable;

@end

