//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKTAutocompleteCollectionViewController.h"

#import "SKTInlineAutocomplete.h"
#import "SKTSelectedContactsViewControllerDelegate.h"

@class NSString, UIView;

@interface SKTInlineAutocompleteViewController : SKTAutocompleteCollectionViewController <SKTSelectedContactsViewControllerDelegate, SKTInlineAutocomplete>
{
    id <SKTInlineAutocompleteDelegate> autocompleteDelegate;
    long long currentState;
}

@property(nonatomic) long long currentState; // @synthesize currentState;
@property(nonatomic) __weak id <SKTInlineAutocompleteDelegate> autocompleteDelegate; // @synthesize autocompleteDelegate;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 innerBackgroundColorForHeaderAtSection:(long long)arg2;
- (id)collectionView:(id)arg1 innerBackgroundColorAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 dividerStyleForElementKind:(unsigned long long)arg2 atIndexPath:(id)arg3;
- (void)selectedContactsVC:(id)arg1 didChangeToMaximumHeight:(double)arg2 fromMaximumHeight:(double)arg3;
- (void)selectedContactsVC:(id)arg1 didUpdateInputState:(long long)arg2 fromInputState:(long long)arg3;
- (void)contactsDataManager:(id)arg1 didLoadContacts:(id)arg2 forQueryText:(id)arg3 queryState:(long long)arg4 resultIndex:(unsigned long long)arg5;
@property(readonly, nonatomic) double autocompleteBarHeight;
@property(readonly, nonatomic) UIView *suggestedContactsView;
@property(readonly, nonatomic) UIView *autocompleteBar;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithDisplayOptions:(id)arg1 contactsDataManager:(id)arg2 analyticsProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
