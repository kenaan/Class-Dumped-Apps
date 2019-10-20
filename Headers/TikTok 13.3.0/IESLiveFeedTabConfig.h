//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface IESLiveFeedTabConfig : MTLModel <MTLJSONSerializing>
{
    _Bool _isDefaultTab;
    _Bool _allowDislike;
    _Bool _showRedDot;
    _Bool _enableUseInnerFeed;
    long long _tabId;
    NSString *_url;
    NSString *_innerURL;
    long long _layoutStyle;
    NSString *_title;
    NSString *_track;
    long long _trackSource;
    long long _superTabId;
    NSString *_enterFrom;
    NSString *_enterMethod;
}

+ (id)typeJSONTransformer;
+ (id)layoutStyleJSONTransformer;
+ (id)isDefaultTabJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool enableUseInnerFeed; // @synthesize enableUseInnerFeed=_enableUseInnerFeed;
@property(copy, nonatomic) NSString *enterMethod; // @synthesize enterMethod=_enterMethod;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
@property(nonatomic) long long superTabId; // @synthesize superTabId=_superTabId;
@property(nonatomic) long long trackSource; // @synthesize trackSource=_trackSource;
@property(copy, nonatomic) NSString *track; // @synthesize track=_track;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(copy, nonatomic) NSString *innerURL; // @synthesize innerURL=_innerURL;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool allowDislike; // @synthesize allowDislike=_allowDislike;
@property(nonatomic) _Bool isDefaultTab; // @synthesize isDefaultTab=_isDefaultTab;
@property(nonatomic) long long tabId; // @synthesize tabId=_tabId;
- (void).cxx_destruct;
- (_Bool)isNecessaryUpdateWithNewConf:(id)arg1;
- (_Bool)isValid;
- (id)dictionaryValue;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
