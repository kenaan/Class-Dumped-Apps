//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

@interface AWEIMUserViewModel : NSObject
{
    _Bool _isToCommerceUser;
    NSString *_uid;
    NSString *_nickname;
    NSString *_alias;
    NSURL *_avatarURL;
    long long _followStatus;
    NSString *_signature;
    long long _latestChatTimestamp;
    NSString *_requestID;
    NSString *_customID;
    NSString *_weiboVerifyInfo;
    NSString *_customVerifyInfo;
    unsigned long long _verificationType;
    NSString *_enterpriseVerifyInfo;
    NSString *_shortID;
    NSNumber *_commerceUserLevel;
    NSString *_aliasPinYin;
    NSString *_nicknamePinYin;
    NSString *_secUserID;
    NSString *_recommendReason;
    NSString *_contactName;
    NSString *_contactNamePinYin;
    NSString *_displayName;
}

@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *contactNamePinYin; // @synthesize contactNamePinYin=_contactNamePinYin;
@property(retain, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(retain, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(retain, nonatomic) NSString *secUserID; // @synthesize secUserID=_secUserID;
@property(retain, nonatomic) NSString *nicknamePinYin; // @synthesize nicknamePinYin=_nicknamePinYin;
@property(retain, nonatomic) NSString *aliasPinYin; // @synthesize aliasPinYin=_aliasPinYin;
@property(nonatomic) _Bool isToCommerceUser; // @synthesize isToCommerceUser=_isToCommerceUser;
@property(retain, nonatomic) NSNumber *commerceUserLevel; // @synthesize commerceUserLevel=_commerceUserLevel;
@property(retain, nonatomic) NSString *shortID; // @synthesize shortID=_shortID;
@property(retain, nonatomic) NSString *enterpriseVerifyInfo; // @synthesize enterpriseVerifyInfo=_enterpriseVerifyInfo;
@property(nonatomic) unsigned long long verificationType; // @synthesize verificationType=_verificationType;
@property(retain, nonatomic) NSString *customVerifyInfo; // @synthesize customVerifyInfo=_customVerifyInfo;
@property(retain, nonatomic) NSString *weiboVerifyInfo; // @synthesize weiboVerifyInfo=_weiboVerifyInfo;
@property(retain, nonatomic) NSString *customID; // @synthesize customID=_customID;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) long long latestChatTimestamp; // @synthesize latestChatTimestamp=_latestChatTimestamp;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(nonatomic) long long followStatus; // @synthesize followStatus=_followStatus;
@property(retain, nonatomic) NSURL *avatarURL; // @synthesize avatarURL=_avatarURL;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)p_updateDisplayName;
- (void)refresh;
- (_Bool)isCommerceProfile;
- (_Bool)isCompanyProfile;
- (void)clearUserDisplayInfo;
- (id)verifiedIconName;
- (_Bool)isPersonalVerifiedEffectArtist;
- (_Bool)isVerifiedEnterprise;
- (_Bool)isVerifiedMusician;
- (_Bool)isVerifiedUser;
- (id)fakeUserID;
- (void)assignWithUser:(id)arg1;
- (id)initWithUserID:(id)arg1 secUserID:(id)arg2;

@end

