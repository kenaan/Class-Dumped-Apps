//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYAPassportResponseModel.h"

@class NSString;

@interface DYAPassportConnectModel : DYAPassportResponseModel
{
    NSString *_platformString;
    NSString *_profileURL;
    long long _expiredTime;
    NSString *_platformScreenName;
    NSString *_platformUid;
    NSString *_userID;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *platformUid; // @synthesize platformUid=_platformUid;
@property(copy, nonatomic) NSString *platformScreenName; // @synthesize platformScreenName=_platformScreenName;
@property(nonatomic) long long expiredTime; // @synthesize expiredTime=_expiredTime;
@property(copy, nonatomic) NSString *profileURL; // @synthesize profileURL=_profileURL;
@property(copy, nonatomic) NSString *platformString; // @synthesize platformString=_platformString;
- (void).cxx_destruct;

@end

