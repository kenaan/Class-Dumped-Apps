//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NFUILabel, NFUISearchBar, NFUISearchDebugger, NFUISearchResultsListViewModel, NFUITabBarItem, NFUITouchGestureRecognizer, NSLayoutConstraint, NSNumber, NSString, UICollectionView, UIView;
@protocol _TtP8ArgoCore15ACFSubscription_;

@interface _TtC4Argo20SearchViewController : UIViewController
{
    // Error parsing type: , name: searchBarContainer
    // Error parsing type: , name: resultsListContainer
    // Error parsing type: , name: prequeryListContainer
    // Error parsing type: , name: noResultsLabel
    // Error parsing type: , name: bottomGuide
    // Error parsing type: , name: backgroundView
    // Error parsing type: , name: searchResultsListViewModel
    // Error parsing type: , name: viewWillAppearTime
    // Error parsing type: , name: nfui_tabBarItem
    // Error parsing type: , name: pendingSearchTerm
    // Error parsing type: , name: becomeFirstResponderOnAppear
    // Error parsing type: , name: debugger
    // Error parsing type: , name: debugMetricId
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: searchOperation
    // Error parsing type: , name: resultsGestureRecognizer
    // Error parsing type: , name: viewDidLoadTime
}

+ (id)searchViewControllerWithPrePopulatedSearchTerm:(id)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) NFUITouchGestureRecognizer *resultsGestureRecognizer; // @synthesize resultsGestureRecognizer;
@property(nonatomic, retain) id <_TtP8ArgoCore15ACFSubscription_> searchOperation; // @synthesize searchOperation;
@property(nonatomic, retain) NSNumber *debugMetricId; // @synthesize debugMetricId;
@property(nonatomic, readonly) NFUISearchDebugger *debugger; // @synthesize debugger;
@property(nonatomic) _Bool becomeFirstResponderOnAppear; // @synthesize becomeFirstResponderOnAppear;
@property(nonatomic, copy) NSString *pendingSearchTerm;
@property(nonatomic, retain) NFUITabBarItem *nfui_tabBarItem; // @synthesize nfui_tabBarItem;
@property(nonatomic, retain) NFUISearchResultsListViewModel *searchResultsListViewModel; // @synthesize searchResultsListViewModel;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView;
@property(nonatomic) __weak NSLayoutConstraint *bottomGuide; // @synthesize bottomGuide;
@property(nonatomic) __weak NFUILabel *noResultsLabel; // @synthesize noResultsLabel;
@property(nonatomic) __weak UICollectionView *prequeryListContainer; // @synthesize prequeryListContainer;
@property(nonatomic) __weak UICollectionView *resultsListContainer; // @synthesize resultsListContainer;
@property(nonatomic) __weak NFUISearchBar *searchBarContainer; // @synthesize searchBarContainer;

@end

