//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface GADOCustomEventRequest : NSObject
{
    _Bool _userHasLocation;
    _Bool _isTesting;
    double _userLatitude;
    double _userLongitude;
    double _userLocationAccuracyInMeters;
    NSString *_userLocationDescription;
    NSArray *_userKeywords;
    NSDictionary *_additionalParameters;
    long long _userGender;
    NSDate *_userBirthday;
}

@property(readonly, copy, nonatomic) NSDate *userBirthday; // @synthesize userBirthday=_userBirthday;
@property(readonly, nonatomic) long long userGender; // @synthesize userGender=_userGender;
@property(readonly, nonatomic) _Bool isTesting; // @synthesize isTesting=_isTesting;
@property(readonly, copy, nonatomic) NSDictionary *additionalParameters; // @synthesize additionalParameters=_additionalParameters;
@property(readonly, copy, nonatomic) NSArray *userKeywords; // @synthesize userKeywords=_userKeywords;
@property(readonly, copy, nonatomic) NSString *userLocationDescription; // @synthesize userLocationDescription=_userLocationDescription;
@property(readonly, nonatomic) double userLocationAccuracyInMeters; // @synthesize userLocationAccuracyInMeters=_userLocationAccuracyInMeters;
@property(readonly, nonatomic) double userLongitude; // @synthesize userLongitude=_userLongitude;
@property(readonly, nonatomic) double userLatitude; // @synthesize userLatitude=_userLatitude;
@property(readonly, nonatomic) _Bool userHasLocation; // @synthesize userHasLocation=_userHasLocation;
- (void).cxx_destruct;
- (id)initWithConnector:(id)arg1;

@end

