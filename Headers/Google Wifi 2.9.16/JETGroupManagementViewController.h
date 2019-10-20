//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareCollectionViewController.h"

@class JETSelectActionContentViewObject;

@interface JETGroupManagementViewController : JETGroupAwareCollectionViewController
{
    JETSelectActionContentViewObject *_versionInfoItem;
    JETSelectActionContentViewObject *_restartItem;
    JETSelectActionContentViewObject *_factoryResetButton;
}

+ (void)displayHUDMessage:(id)arg1;
@property(retain, nonatomic) JETSelectActionContentViewObject *factoryResetButton; // @synthesize factoryResetButton=_factoryResetButton;
@property(retain, nonatomic) JETSelectActionContentViewObject *restartItem; // @synthesize restartItem=_restartItem;
@property(retain, nonatomic) JETSelectActionContentViewObject *versionInfoItem; // @synthesize versionInfoItem=_versionInfoItem;
- (void).cxx_destruct;
- (id)softwareVersionNotUpToDateString;
- (id)softwareVersionUpToDateString;
- (void)handleFactoryResetItemTapped;
- (void)handleRestartButtonTapped;
- (void)addOnHubButtonTapped;
- (void)updateVersionInfoItem;
- (void)constructModel;
- (unsigned long long)collectionView:(id)arg1 inkTouchStyleAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)accessPointsGroupIsUpdated;

@end
