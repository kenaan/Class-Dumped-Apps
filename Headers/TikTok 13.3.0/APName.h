//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface APName : NSObject
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_middleName;
    NSString *_compositeName;
}

@property(retain, nonatomic) NSString *compositeName; // @synthesize compositeName=_compositeName;
@property(retain, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;

@end

