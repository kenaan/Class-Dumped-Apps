//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMListBaseViewController.h"

@class NSArray, UILabel;
@protocol AWEIMShareCurrentGroupListViewControllerDelegate;

@interface AWEIMShareCurrentGroupListViewController : AWEIMListBaseViewController
{
    id <AWEIMShareCurrentGroupListViewControllerDelegate> _shareCurrentGroupListViewControllerDelegate;
    NSArray *_initialSelectedShareModelArray;
    UILabel *_completionLabel;
}

@property(retain, nonatomic) UILabel *completionLabel; // @synthesize completionLabel=_completionLabel;
@property(retain, nonatomic) NSArray *initialSelectedShareModelArray; // @synthesize initialSelectedShareModelArray=_initialSelectedShareModelArray;
@property(nonatomic) __weak id <AWEIMShareCurrentGroupListViewControllerDelegate> shareCurrentGroupListViewControllerDelegate; // @synthesize shareCurrentGroupListViewControllerDelegate=_shareCurrentGroupListViewControllerDelegate;
- (void).cxx_destruct;
- (void)p_didTapComplete;
- (void)p_updateNavBar;
- (void)p_dismiss;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (void)fetchData;
- (long long)currentFunctin;
- (_Bool)canTapCellAtIndexPath:(id)arg1;
- (void)changeToMultiselect:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateMultiselectCount:(long long)arg1;
- (void)viewDidLoad;

@end

