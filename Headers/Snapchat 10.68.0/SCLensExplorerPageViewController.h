//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPageViewController.h>

#import "SCLensExplorerCategoryViewControllerDelegate-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, SCLECategoriesLayout, SCLensExplorerCategories, SCLoadingIndicatorView, SIGTabBarView, UIView;
@protocol SCLensExplorerFactoryProtocol, SCLensExplorerPageViewControllerDelegate;

@interface SCLensExplorerPageViewController : UIPageViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, SCLensExplorerCategoryViewControllerDelegate>
{
    SCLensExplorerCategories *_categoriesActionHandler;
    id <SCLensExplorerFactoryProtocol> _lensExplorerFactory;
    SCLECategoriesLayout *_layout;
    SCLoadingIndicatorView *_loadingIndicator;
    NSMutableDictionary *_viewControllers;
    NSMutableDictionary *_pendingCategoryViewControllers;
    SIGTabBarView *_categoriesTabBar;
    UIView *_categoriesTabBarContainer;
    UIView *_shadowView;
    NSArray *_tabBarItems;
    id <SCLensExplorerPageViewControllerDelegate> _lensExplorerDelegate;
}

@property(nonatomic) __weak id <SCLensExplorerPageViewControllerDelegate> lensExplorerDelegate; // @synthesize lensExplorerDelegate=_lensExplorerDelegate;
- (void).cxx_destruct;
- (void)didUpdateContentForViewController:(id)arg1;
- (void)didEndDragingViewController:(id)arg1;
- (void)didScrollViewController:(id)arg1;
- (void)didBeginDragingViewController:(id)arg1;
- (void)_updateTabBarSelectionWithCategory:(unsigned long long)arg1;
- (void)_selectPageForCategory:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)onCategorySelectionChanged:(id)arg1;
- (long long)pageViewController:(id)arg1 spineLocationForInterfaceOrientation:(long long)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)refreshCategory:(unsigned long long)arg1;
- (void)_setupKarma;
- (void)_animateCategoriesShadowOpacity:(float)arg1;
- (void)_prepareViewControllers;
- (_Bool)_shouldUpdateTabBar;
- (void)_prepareTabBar;
- (void)_animateCategoriesAppearence;
- (void)_setupShadowView;
- (void)_setupLoadingIndicator;
- (void)_initialSetup;
- (void)viewDidLoad;
- (id)initWithLensExplorerFactory:(id)arg1 categoriesActionHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

