//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYAPassportResponseModel.h"

#import "DYARawDataProtocol-Protocol.h"
#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface DYAPassportAccountModel : DYAPassportResponseModel <DYARawDataProtocol, MTLJSONSerializing>
{
    _Bool _isNewUser;
    NSDictionary *rawData;
    NSString *_userID;
    NSString *_phoneNumber;
    NSString *_sessionKey;
    NSArray *_connects;
}

+ (id)userIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *connects; // @synthesize connects=_connects;
@property(nonatomic) _Bool isNewUser; // @synthesize isNewUser=_isNewUser;
@property(copy, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSDictionary *rawData; // @synthesize rawData;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

