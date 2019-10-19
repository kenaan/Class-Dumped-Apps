//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveLanguageService-Protocol.h"

@class NSString, RACSignal, RACSubject;

@interface AWELiveLanguageServiceImpl : NSObject <IESLiveLanguageService>
{
    RACSubject *_languageSubject;
    RACSubject *_interfaceLanguageSubject;
}

@property(retain, nonatomic) RACSubject *interfaceLanguageSubject; // @synthesize interfaceLanguageSubject=_interfaceLanguageSubject;
@property(retain, nonatomic) RACSubject *languageSubject; // @synthesize languageSubject=_languageSubject;
- (void).cxx_destruct;
- (id)_getMapLanguageCodeOfMT;
- (id)_getLiveLanguageCode;
- (void)enableHostRTLFlipForView:(id)arg1;
- (void)disableHostLocalizations:(id)arg1;
- (id)currentInterfaceLC;
- (id)currentRegion;
- (id)locale;
- (id)currentLanguageCode;
- (id)hostCurrentLanguageCode;
- (id)currentCountryCode;
@property(readonly, nonatomic) RACSignal *interfaceLC;
@property(readonly, nonatomic) RACSignal *languageChanged;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

