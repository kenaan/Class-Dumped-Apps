//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface CHRIntentDetectorEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(nonatomic) int annotatedStringLength; // @dynamic annotatedStringLength;
@property(nonatomic) _Bool annotatedUsingCache; // @dynamic annotatedUsingCache;
@property(nonatomic) _Bool handledWithDefaultAction; // @dynamic handledWithDefaultAction;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasAnnotatedStringLength; // @dynamic hasAnnotatedStringLength;
@property(nonatomic) _Bool hasAnnotatedUsingCache; // @dynamic hasAnnotatedUsingCache;
@property(nonatomic) _Bool hasHandledWithDefaultAction; // @dynamic hasHandledWithDefaultAction;
@property(nonatomic) _Bool hasInputTextLength; // @dynamic hasInputTextLength;
@property(nonatomic) _Bool hasInstalledBundleIdentifier; // @dynamic hasInstalledBundleIdentifier;
@property(nonatomic) _Bool hasTotalAnnotationCount; // @dynamic hasTotalAnnotationCount;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) int inputTextLength; // @dynamic inputTextLength;
@property(copy, nonatomic) NSString *installedBundleIdentifier; // @dynamic installedBundleIdentifier;
@property(nonatomic) int totalAnnotationCount; // @dynamic totalAnnotationCount;
@property(nonatomic) int type; // @dynamic type;

@end
