//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCCaptureComponentMessageProtocol-Protocol.h"
#import "ACCFilterComponentProtocol-Protocol.h"
#import "ACCFilterSwitchComponentMessageProtocol-Protocol.h"
#import "ACCRecordSwitchModeComponentMessageProtocol-Protocol.h"
#import "ACCRecordToolBarComponentMessage-Protocol.h"
#import "AWERecordFilterVCDelegate-Protocol.h"

@class AWECameraFilterConfiguration, AWETabFilterViewController, IESEffectModel, NSArray, NSMutableSet, NSString;
@protocol ACCCaptureComponentProtocol, ACCComponentBusProtocol, ACCComponentProtocol, ACCStickerComponentProtocol;

@interface ACCFilterComponent : NSObject <AWERecordFilterVCDelegate, ACCFilterComponentProtocol, ACCFilterSwitchComponentMessageProtocol, ACCCaptureComponentMessageProtocol, ACCRecordToolBarComponentMessage, ACCRecordSwitchModeComponentMessageProtocol>
{
    id <ACCComponentBusProtocol> componentBus;
    IESEffectModel *currentFilter;
    NSArray *filterArray;
    AWETabFilterViewController *_filterController;
    AWECameraFilterConfiguration *_filterConfiguration;
    NSMutableSet *_scrollBrowsedFilters;
    id <ACCCaptureComponentProtocol> _captureComponent;
    id <ACCStickerComponentProtocol> _stickerComponent;
}

@property(readonly, nonatomic) __weak id <ACCStickerComponentProtocol> stickerComponent; // @synthesize stickerComponent=_stickerComponent;
@property(readonly, nonatomic) __weak id <ACCCaptureComponentProtocol> captureComponent; // @synthesize captureComponent=_captureComponent;
@property(retain, nonatomic) NSMutableSet *scrollBrowsedFilters; // @synthesize scrollBrowsedFilters=_scrollBrowsedFilters;
@property(retain, nonatomic) AWECameraFilterConfiguration *filterConfiguration; // @synthesize filterConfiguration=_filterConfiguration;
@property(retain, nonatomic) AWETabFilterViewController *filterController; // @synthesize filterController=_filterController;
@property(retain, nonatomic) NSArray *filterArray; // @synthesize filterArray;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus;
- (void).cxx_destruct;
- (id)rootComponent;
@property(retain, nonatomic) IESEffectModel *currentFilter; // @synthesize currentFilter;
- (id)camera;
- (void)msg_didChangeToMode:(long long)arg1 fromMode:(long long)arg2;
- (void)msg_didClickFilterButton;
- (void)msg_didClickSwapCameraButton;
- (void)msg_createCameraCompleteWithCamera:(id)arg1;
- (id)needRecoverFilter;
- (id)tabNameForFilter:(id)arg1;
- (void)showOnView:(id)arg1;
- (void)refreshSelectedFilterWithModel:(id)arg1;
- (void)applyFilterForCurrentCameraWithShowFilterName:(_Bool)arg1;
- (void)applyFilterForCurrentCamera;
- (void)applyFilter:(id)arg1 withShowFilterName:(_Bool)arg2;
- (void)applyFilter:(id)arg1;
- (void)msg_filterSwitchFinishWithModel:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)autoInjectComponentDictionaryOfstickerComponent;
- (id)autoInjectComponentDictionaryOfcaptureComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;

@end

