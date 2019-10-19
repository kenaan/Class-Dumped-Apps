//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class IESPlatformSDKContentSyncReq, NSDictionary;

@interface AWEContentSyncAuthViewController : UIViewController
{
    IESPlatformSDKContentSyncReq *_contentSyncReq;
    NSDictionary *_userInfo;
    CDUnknownBlockType _completedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) IESPlatformSDKContentSyncReq *contentSyncReq; // @synthesize contentSyncReq=_contentSyncReq;
- (void).cxx_destruct;
- (void)dismissSelf;
- (void)actionDidTapCancelAuthButton:(id)arg1;
- (void)actionDidTapActionButton:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissDidEnterBackgroundWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidLoad;
- (id)initWithAuthReq:(id)arg1 userInfo:(id)arg2 completedBlock:(CDUnknownBlockType)arg3;

@end

