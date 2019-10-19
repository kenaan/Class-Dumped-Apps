//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEModernFeedCellControllerProtocol-Protocol.h"
#import "AWESearchTopUserAdRelatedDelegate-Protocol.h"

@class AWEGeneralTopUserQuickShopView, AWESearchAdStarEndorsementModel, NSDictionary, NSString;
@protocol AWEModernFeedCellContext;

@interface AWEGeneralTopUserQuickShopCellController : UIViewController <AWESearchTopUserAdRelatedDelegate, AWEModernFeedCellControllerProtocol>
{
    id <AWEModernFeedCellContext> _context;
    AWEGeneralTopUserQuickShopView *_quickShopView;
    NSDictionary *_logPassback;
    NSString *_keyWord;
    AWESearchAdStarEndorsementModel *_endorseModel;
}

+ (double)modernFeedCellPreferedHeightForModel:(id)arg1 width:(double)arg2;
+ (void)__awe__codeRunnerRun_30;
@property(retain, nonatomic) AWESearchAdStarEndorsementModel *endorseModel; // @synthesize endorseModel=_endorseModel;
@property(copy, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(copy, nonatomic) NSDictionary *logPassback; // @synthesize logPassback=_logPassback;
@property(retain, nonatomic) AWEGeneralTopUserQuickShopView *quickShopView; // @synthesize quickShopView=_quickShopView;
@property(retain, nonatomic) id <AWEModernFeedCellContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)trackAdShow;
- (void)didBecomeVisibleToUsers;
- (void)didBecomeActiveForReason:(unsigned long long)arg1;
- (void)adImageTapped;
- (void)updateWithModel:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

