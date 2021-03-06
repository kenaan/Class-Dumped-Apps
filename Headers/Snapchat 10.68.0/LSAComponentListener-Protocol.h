//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LSABaseComponent, LSAEffectInfo;

@protocol LSAComponentListener <NSObject>
- (void)component:(LSABaseComponent *)arg1 didSetComplexEffect:(LSAEffectInfo *)arg2;
- (void)component:(LSABaseComponent *)arg1 willSetComplexEffect:(LSAEffectInfo *)arg2;
- (void)componentDidProcessFrame:(LSABaseComponent *)arg1;
- (void)componentWillProcessFrame:(LSABaseComponent *)arg1;
@end

