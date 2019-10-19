//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEProfileResponseModel, AWEUserModel, AWEUserPostsDataManager, NSArray, NSError, NSString;

@interface AWEProfilePreloadManager : NSObject
{
    _Bool _needDelayForUser;
    _Bool _needDelayForPostWorks;
    NSString *_userID;
    CDUnknownBlockType _userHandler;
    CDUnknownBlockType _postWorkHandler;
    AWEUserPostsDataManager *_postDataManager;
    NSArray *_postWorksList;
    NSError *_postWorksError;
    AWEUserModel *_user;
    AWEProfileResponseModel *_profileResponseModel;
    NSError *_userError;
    long long _userStatus;
    long long _postWorksStatus;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool needDelayForPostWorks; // @synthesize needDelayForPostWorks=_needDelayForPostWorks;
@property(nonatomic) _Bool needDelayForUser; // @synthesize needDelayForUser=_needDelayForUser;
@property(nonatomic) long long postWorksStatus; // @synthesize postWorksStatus=_postWorksStatus;
@property(nonatomic) long long userStatus; // @synthesize userStatus=_userStatus;
@property(retain, nonatomic) NSError *userError; // @synthesize userError=_userError;
@property(retain, nonatomic) AWEProfileResponseModel *profileResponseModel; // @synthesize profileResponseModel=_profileResponseModel;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) NSError *postWorksError; // @synthesize postWorksError=_postWorksError;
@property(copy, nonatomic) NSArray *postWorksList; // @synthesize postWorksList=_postWorksList;
@property(retain, nonatomic) AWEUserPostsDataManager *postDataManager; // @synthesize postDataManager=_postDataManager;
@property(copy, nonatomic) CDUnknownBlockType postWorkHandler; // @synthesize postWorkHandler=_postWorkHandler;
@property(copy, nonatomic) CDUnknownBlockType userHandler; // @synthesize userHandler=_userHandler;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (void)p_preloadPostWorks;
- (void)p_preloadUserInfo;
- (void)loadPostWorksAfterEnterUserDetailWithSuccessCompletion:(CDUnknownBlockType)arg1 failCompletion:(CDUnknownBlockType)arg2;
- (void)loadUserAfterEnterUserDetailWithSuccessCompletion:(CDUnknownBlockType)arg1 failCompletion:(CDUnknownBlockType)arg2;
- (_Bool)hasPreload:(id)arg1;
- (void)preloadPostWorksAndUserInfo:(id)arg1;
- (id)preloadedPostDataManager;
- (id)preloadedProfileResponse;
- (id)preloadedUser;
- (id)init;

@end

