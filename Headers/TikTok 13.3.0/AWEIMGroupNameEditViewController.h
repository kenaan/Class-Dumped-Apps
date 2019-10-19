//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWETextEditViewController.h"

@class AWEIMMessageConversation, AWEUILoadingView, NSString;

@interface AWEIMGroupNameEditViewController : AWETextEditViewController
{
    AWEIMMessageConversation *_conversation;
    NSString *_groupName;
    AWEUILoadingView *_loadingView;
}

@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) AWEIMMessageConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (void)editTextFieldDidChange:(id)arg1;
- (void)updateEmptyNumberText;
- (void)saveButtonClicked;
- (void)viewDidLoad;
- (id)initWithConversation:(id)arg1;

@end

