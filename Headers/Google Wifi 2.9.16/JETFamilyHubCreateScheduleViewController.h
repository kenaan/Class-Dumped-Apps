//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareCollectionViewController.h"

@class GTLRAccesspoints_BlockingSchedule, JETAccessibilityAnnouncer, JETButtonFooter, JETFamilyHubHelper;

@interface JETFamilyHubCreateScheduleViewController : JETGroupAwareCollectionViewController
{
    JETAccessibilityAnnouncer *_accessibilityAnnouncer;
    JETFamilyHubHelper *_familyHubHelper;
    GTLRAccesspoints_BlockingSchedule *_schedule;
    JETButtonFooter *_footer;
}

@property(retain, nonatomic) JETButtonFooter *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) GTLRAccesspoints_BlockingSchedule *schedule; // @synthesize schedule=_schedule;
@property(retain, nonatomic) JETFamilyHubHelper *familyHubHelper; // @synthesize familyHubHelper=_familyHubHelper;
@property(retain, nonatomic) JETAccessibilityAnnouncer *accessibilityAnnouncer; // @synthesize accessibilityAnnouncer=_accessibilityAnnouncer;
- (void).cxx_destruct;
- (void)showPresetSelection;
- (void)notNowTapped;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)navigationStyle;
- (void)constructModel;
- (id)initWithUserState:(id)arg1 group:(id)arg2;

@end

