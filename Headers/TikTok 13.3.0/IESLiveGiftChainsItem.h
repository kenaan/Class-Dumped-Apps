//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveGiftItem.h"

@class IESLiveGiftChainsRuleItem, NSString;
@protocol HTSLiveDetailRouter;

@interface IESLiveGiftChainsItem : HTSLiveGiftItem
{
    IESLiveGiftChainsRuleItem *_giftRule;
    NSString *_giftChainsShowFromPage;
    id <HTSLiveDetailRouter> _router;
}

+ (id)itemFromModel:(id)arg1;
@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(copy, nonatomic) NSString *giftChainsShowFromPage; // @synthesize giftChainsShowFromPage=_giftChainsShowFromPage;
@property(retain, nonatomic) IESLiveGiftChainsRuleItem *giftRule; // @synthesize giftRule=_giftRule;
- (void).cxx_destruct;
- (void)selectFailed;
- (_Bool)canSelect;

@end

