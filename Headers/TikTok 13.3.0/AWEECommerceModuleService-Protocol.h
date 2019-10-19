//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class AWEAwemeModel, AWEGoodsEnterFullScreenRequest, AWEGoodsTrackObject, AWEUserModel, NSArray, NSDictionary, NSString, UIViewController;
@protocol AWEECommerceReferProperty, AWEGoodsBasicModelProtocol, AWEGoodsCardPromptManagerInterface;

@protocol AWEECommerceModuleService <HTSService>
- (void)shopMessageListWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (NSDictionary *)legacyGoodsJSONForModel:(AWEAwemeModel *)arg1;
- (NSString *)webTransformCardURLStringForModel:(AWEAwemeModel *)arg1;
- (UIViewController<AWEECommerceReferProperty> *)makeFavoriteViewController;
- (id <AWEGoodsCardPromptManagerInterface>)makeNewAWEGoodsCardPromptManager;
- (void)invaildBridge;
- (void)initECommercePatch;
- (void)initBridge;
- (void)getGoodsShoppingCartCountCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)prepareToVisitGoods:(id <AWEGoodsBasicModelProtocol>)arg1 completion:(void (^)(void))arg2 failure:(void (^)(void))arg3;
- (void)requestShophelperHintWithParams:(NSDictionary *)arg1 Completion:(void (^)(id <AWEShopAssistModelProtocol>, NSError *))arg2;
- (void)openShopAssistantPageWithPageUrl:(NSString *)arg1;
- (void)openGoodsGuideOnViewcontroller:(UIViewController *)arg1 entryPage:(NSString *)arg2 completionBlock:(void (^)(void))arg3;
- (void)goodsPageWithDraftID:(NSString *)arg1 completion:(void (^)(UIViewController *))arg2;
- (UIViewController *)openGoodsSeedManageWithDraftID:(NSString *)arg1 title:(NSString *)arg2 willOpen:(_Bool)arg3;
- (void)openGoodsManageWithDraftID:(NSString *)arg1;
- (void)openNewShopInstrumentBoxFromPage:(NSString *)arg1 enterMethod:(NSString *)arg2;
- (void)openShopInstrumentBoxFromPage:(NSString *)arg1 enterMethod:(NSString *)arg2;
- (void)track:(AWEGoodsTrackObject *)arg1;
- (_Bool)shouldShowGoodsInfoInComments:(AWEAwemeModel *)arg1;
- (_Bool)shouldShowGoodsPromotionViewWithModel:(AWEAwemeModel *)arg1 currentPalyTime:(double)arg2;
- (_Bool)shouldShowPOIStyleShoppingEntrance:(AWEAwemeModel *)arg1;
- (id <AWEGoodsBasicModelProtocol>)goodsInAweme:(AWEAwemeModel *)arg1 promotionID:(NSString *)arg2;
- (NSArray *)goodsListInAweme:(AWEAwemeModel *)arg1;
- (unsigned long long)awemeGoodsCount:(AWEAwemeModel *)arg1;
- (_Bool)hasShopEntry:(AWEUserModel *)arg1;
- (_Bool)shouldShowShoppingEntranceForAweme:(AWEAwemeModel *)arg1;
- (_Bool)useWebBasedSlideCardForAweme:(AWEAwemeModel *)arg1;
- (void)getGoodsDetailStyleForAweme:(AWEAwemeModel *)arg1 result:(void (^)(unsigned long long, NSError *))arg2;
- (_Bool)hasGoodsStrictlyWithAwemeModel:(AWEAwemeModel *)arg1;
- (_Bool)shouldShowGoodInfoInComments;
- (void)fetchUserTaobaoKeStatusIfUserLogin;
- (void)enterFullScreenRequest:(AWEGoodsEnterFullScreenRequest *)arg1;
@end

