//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface AWESmartPhoneConfig : NSObject
{
    NSString *_adID;
    NSString *_logExtra;
    NSString *_phoneNumber;
    NSString *_creativeID;
    NSNumber *_instanceID;
    NSString *_phoneKey;
    NSString *_positionTag;
}

@property(copy, nonatomic) NSString *positionTag; // @synthesize positionTag=_positionTag;
@property(copy, nonatomic) NSString *phoneKey; // @synthesize phoneKey=_phoneKey;
@property(retain, nonatomic) NSNumber *instanceID; // @synthesize instanceID=_instanceID;
@property(copy, nonatomic) NSString *creativeID; // @synthesize creativeID=_creativeID;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *logExtra; // @synthesize logExtra=_logExtra;
@property(copy, nonatomic) NSString *adID; // @synthesize adID=_adID;
- (void).cxx_destruct;
- (id)initWithOriginAdModel:(id)arg1;

@end
