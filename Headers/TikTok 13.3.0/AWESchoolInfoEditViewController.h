//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEUserMessage-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEProfileEditViewModel, AWESchoolInfoEditModel, AWESettingsTableViewCell, NSMutableArray, NSString, UIButton, UITableView, UITableViewCell;

@interface AWESchoolInfoEditViewController : UIViewController <AWEUserMessage, BTDRouterViewControllerProtocol, UITableViewDataSource, UITableViewDelegate>
{
    AWEProfileEditViewModel *_viewModel;
    CDUnknownBlockType _submitBlock;
    UITableView *_tableView;
    UIButton *_saveButton;
    NSMutableArray *_cellArray;
    AWESettingsTableViewCell *_schoolCell;
    AWESettingsTableViewCell *_collegeCell;
    AWESettingsTableViewCell *_yearCell;
    AWESettingsTableViewCell *_educationCell;
    UITableViewCell *_lineCell;
    AWESettingsTableViewCell *_visibleCell;
    AWESchoolInfoEditModel *_editModel;
}

+ (void)__awe__codeRunnerRun_96;
@property(retain, nonatomic) AWESchoolInfoEditModel *editModel; // @synthesize editModel=_editModel;
@property(retain, nonatomic) AWESettingsTableViewCell *visibleCell; // @synthesize visibleCell=_visibleCell;
@property(retain, nonatomic) UITableViewCell *lineCell; // @synthesize lineCell=_lineCell;
@property(retain, nonatomic) AWESettingsTableViewCell *educationCell; // @synthesize educationCell=_educationCell;
@property(retain, nonatomic) AWESettingsTableViewCell *yearCell; // @synthesize yearCell=_yearCell;
@property(retain, nonatomic) AWESettingsTableViewCell *collegeCell; // @synthesize collegeCell=_collegeCell;
@property(retain, nonatomic) AWESettingsTableViewCell *schoolCell; // @synthesize schoolCell=_schoolCell;
@property(retain, nonatomic) NSMutableArray *cellArray; // @synthesize cellArray=_cellArray;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType submitBlock; // @synthesize submitBlock=_submitBlock;
@property(retain, nonatomic) AWEProfileEditViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (_Bool)updateSucceed;
- (void)didFinishUpdateAwemeUser;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)editCellStyle;
- (id)placeholderString;
- (void)submitWithParam:(id)arg1;
- (void)changedSchoolInfo;
- (void)showAlertViewWithTitle:(id)arg1 confirmTitle:(id)arg2 cancelTitle:(id)arg3 confirmBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5;
- (id)submitSchoolInfoDic;
- (void)saveButtonTapped;
- (void)backButtonTapped;
- (void)selectVisibleType;
- (void)selectEducation;
- (void)selectYear;
- (void)selectCollege;
- (void)showSelectSchoolViewController;
- (void)p_addObserver;
- (void)p_setupUI;
- (void)dealloc;
- (void)setStatusBarBackgroundColor:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

