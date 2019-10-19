//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMListBaseViewController.h"

@class AWEIMMessageConversation, AWEUILoadingView, NSArray, UILabel;

@interface AWEIMGroupChangeMemberViewController : AWEIMListBaseViewController
{
    long long _type;
    UILabel *_completionLabel;
    AWEIMMessageConversation *_conversation;
    AWEUILoadingView *_loadingView;
    NSArray *_participants;
}

@property(retain, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AWEIMMessageConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) UILabel *completionLabel; // @synthesize completionLabel=_completionLabel;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg1;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (id)participantWithUserID:(id)arg1;
- (_Bool)disableSelectCellIsSelected;
- (_Bool)canTapCellAtIndexPath:(id)arg1;
- (_Bool)canSelectCellAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)deleteMember;
- (void)addMember;
- (void)p_didTapComplete;
- (void)p_back;
- (long long)currentFunctin;
- (void)changeToMultiselect:(_Bool)arg1;
- (void)updateMultiselectCount:(long long)arg1;
- (void)fetchData;
- (void)p_updateNavBar;
- (void)viewDidLoad;
- (void)updateParticipants;
- (id)initWithChangeType:(long long)arg1 conversation:(id)arg2;

@end

