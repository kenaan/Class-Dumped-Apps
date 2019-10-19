//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWECommentListInputViewDelegate-Protocol.h"

@class AWEAwemeModel, AWECommentListInputView, AWECommentModel, NSDictionary, NSString;

@interface AWECreateRepostController : NSObject <AWECommentListInputViewDelegate>
{
    _Bool _isShowingRepost;
    AWECommentListInputView *_commentInputView;
    AWEAwemeModel *_aweme;
    AWEAwemeModel *_fromAweme;
    AWECommentModel *_replyComment;
    AWECommentModel *_replySubComment;
    id _notificationObject;
    CDUnknownBlockType _createCompletion;
    CDUnknownBlockType _sendRepostBlock;
    NSString *_fakeCommentID;
    CDUnknownBlockType _needHideToastBlock;
    NSDictionary *_logDict;
    double _enterTextStartTimestamp;
}

+ (id)sharedInstance;
@property(nonatomic) double enterTextStartTimestamp; // @synthesize enterTextStartTimestamp=_enterTextStartTimestamp;
@property(retain, nonatomic) NSDictionary *logDict; // @synthesize logDict=_logDict;
@property(copy, nonatomic) CDUnknownBlockType needHideToastBlock; // @synthesize needHideToastBlock=_needHideToastBlock;
@property(copy, nonatomic) NSString *fakeCommentID; // @synthesize fakeCommentID=_fakeCommentID;
@property(copy, nonatomic) CDUnknownBlockType sendRepostBlock; // @synthesize sendRepostBlock=_sendRepostBlock;
@property(copy, nonatomic) CDUnknownBlockType createCompletion; // @synthesize createCompletion=_createCompletion;
@property(nonatomic) __weak id notificationObject; // @synthesize notificationObject=_notificationObject;
@property(copy, nonatomic) AWECommentModel *replySubComment; // @synthesize replySubComment=_replySubComment;
@property(copy, nonatomic) AWECommentModel *replyComment; // @synthesize replyComment=_replyComment;
@property(retain, nonatomic) AWEAwemeModel *fromAweme; // @synthesize fromAweme=_fromAweme;
@property(retain, nonatomic) AWEAwemeModel *aweme; // @synthesize aweme=_aweme;
@property(retain, nonatomic) AWECommentListInputView *commentInputView; // @synthesize commentInputView=_commentInputView;
@property(nonatomic) _Bool isShowingRepost; // @synthesize isShowingRepost=_isShowingRepost;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isInputing;
- (_Bool)commentInputViewShouldRemoveFromSuperAfterHide:(id)arg1;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (void)commentInputViewDidHide:(id)arg1;
- (_Bool)commentInputViewShouldBeginEditing:(id)arg1;
- (void)commentInputView:(id)arg1 didChangeHeightWithDiff:(double)arg2;
- (_Bool)commentInputViewShouldReturn:(id)arg1;
- (void)createRepostWithContent:(id)arg1 inputView:(id)arg2;
- (_Bool)userTappedSendWithContent:(id)arg1 inputView:(id)arg2;
- (void)createRepostWithAweme:(id)arg1 fromAweme:(id)arg2 logDict:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createRepostWithAweme:(id)arg1 fromAweme:(id)arg2 replyComment:(id)arg3 replySubComment:(id)arg4 notificationObject:(id)arg5 logDict:(id)arg6 sendRepostBlock:(CDUnknownBlockType)arg7 needHideToastBlock:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
- (void)createRepostWithAweme:(id)arg1 fromAweme:(id)arg2 replyComment:(id)arg3 replySubComment:(id)arg4 notificationObject:(id)arg5 logDict:(id)arg6 completion:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

