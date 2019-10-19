//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEDigitalWellbeingListControlMessage-Protocol.h"
#import "AWESettingMethodProtocol-Protocol.h"
#import "AWESettingViewModelProtocol-Protocol.h"

@class NSArray, NSString;
@protocol AWESettingBaseViewModelDelegate;

@interface AWESettingBaseViewModel : NSObject <AWEDigitalWellbeingListControlMessage, AWESettingViewModelProtocol, AWESettingMethodProtocol>
{
    long long _colorStyle;
    id <AWESettingBaseViewModelDelegate> _controllerDelegate;
    NSArray *_filteredSectionDataArray;
}

@property(retain, nonatomic) NSArray *filteredSectionDataArray; // @synthesize filteredSectionDataArray=_filteredSectionDataArray;
@property(nonatomic) __weak id <AWESettingBaseViewModelDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
@property(nonatomic) long long colorStyle; // @synthesize colorStyle=_colorStyle;
- (void).cxx_destruct;
- (void)listControlDidChange;
- (id)handleItemInSectionDataArray:(id)arg1;
- (void)handleItemInSectionDataArray;
- (void)viewDidDisapper;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)refreshAllCells;
- (id)itemModelWithType:(long long)arg1;
@property(retain, nonatomic) NSArray *sectionDataArray; // @dynamic sectionDataArray;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

