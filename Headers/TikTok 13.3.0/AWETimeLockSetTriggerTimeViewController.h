//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView, UITableViewCell;

@interface AWETimeLockSetTriggerTimeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    long long _triggerTime;
    CDUnknownBlockType _triggerTimePassingBlock;
    UITableView *_tableView;
    UITableViewCell *_bottomPaddingCell;
    NSArray *_triggerTimeArray;
}

@property(retain, nonatomic) NSArray *triggerTimeArray; // @synthesize triggerTimeArray=_triggerTimeArray;
@property(retain, nonatomic) UITableViewCell *bottomPaddingCell; // @synthesize bottomPaddingCell=_bottomPaddingCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType triggerTimePassingBlock; // @synthesize triggerTimePassingBlock=_triggerTimePassingBlock;
@property(nonatomic) long long triggerTime; // @synthesize triggerTime=_triggerTime;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)backBtnClicked:(id)arg1;
- (void)setDefault;
- (void)setupUI;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

