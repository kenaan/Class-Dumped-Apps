//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CHRSiriSuggestionType.h"

@class NSString;

@interface CHRSiriSuggestionTypeProxy : NSObject <CHRSiriSuggestionType>
{
    NSString *_activityType;
    Class _parameterType;
    unsigned long long _currentSuggestionVersion;
}

@property(nonatomic) unsigned long long currentSuggestionVersion; // @synthesize currentSuggestionVersion=_currentSuggestionVersion;
@property(retain, nonatomic) Class parameterType; // @synthesize parameterType=_parameterType;
@property(retain, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
- (void).cxx_destruct;
- (id)initWithActivityType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long minRequiredSuggestionVersion;
@property(readonly) Class superclass;

@end

