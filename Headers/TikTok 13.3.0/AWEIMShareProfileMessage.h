//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMMessage.h"

@class AWEIMUser, AWEURLModel, NSArray, NSString;

@interface AWEIMShareProfileMessage : AWEIMMessage
{
    NSString *_userDescription;
    NSArray *_coverURLArray;
    NSString *_uid;
    NSString *_secUID;
    AWEIMUser *_user;
    NSString *_pushDetail;
    NSString *_name;
    AWEURLModel *_avatarURLModel;
}

@property(retain, nonatomic) AWEURLModel *avatarURLModel; // @synthesize avatarURLModel=_avatarURLModel;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *pushDetail; // @synthesize pushDetail=_pushDetail;
@property(retain, nonatomic) AWEIMUser *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *secUID; // @synthesize secUID=_secUID;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSArray *coverURLArray; // @synthesize coverURLArray=_coverURLArray;
@property(copy, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getContentDict;
- (id)initWithContentDict:(id)arg1;

@end

