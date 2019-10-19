//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCUserModelProtocol-Protocol.h"

@class NSNumber, NSString;

@interface ACCUserModel : NSObject <ACCUserModelProtocol>
{
    NSString *userName;
    NSString *userID;
    NSNumber *followerCount;
    NSString *nickname;
}

+ (id)convertUserModelWithBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname;
@property(retain, nonatomic) NSNumber *followerCount; // @synthesize followerCount;
@property(copy, nonatomic) NSString *userID; // @synthesize userID;
@property(copy, nonatomic) NSString *userName; // @synthesize userName;
- (void).cxx_destruct;
- (void)updatePropertyWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

