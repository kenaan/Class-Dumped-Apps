//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPOIDetailIconTextCellViewController.h"

@class AWEPOIDetailStore, NSString;

@interface AWEPOIDetailSceneryIntroductionCellViewController : AWEPOIDetailIconTextCellViewController
{
    NSString *_poiID;
    AWEPOIDetailStore *_store;
}

+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) AWEPOIDetailStore *store; // @synthesize store=_store;
@property(copy, nonatomic) NSString *poiID; // @synthesize poiID=_poiID;
- (void).cxx_destruct;
- (_Bool)shouldShowRightArrow;
- (void)handleTap;
- (void)updateWithModel:(id)arg1;
- (id)iconImageName;

@end

