//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTCellViewControllerProtocol.h"
#import "YTResponder.h"
#import "YTUserDefaultsObserver.h"

@class GIMMe, NSString, YTAutonavHeaderView, YTIShelfRenderer;

@interface YTAutoNavHeaderCellViewController : NSObject <YTUserDefaultsObserver, YTCellViewControllerProtocol, YTResponder>
{
    _Bool _visibilityUpdated;
    YTIShelfRenderer *_shelfRenderer;
    YTAutonavHeaderView *_autonavHeaderView;
    id <YTServices> _services;
    id <MDXServices> _mdxServices;
    id <YTResponder> _parentResponder;
    id <YTSectionControllerDelegate> sectionControllerDelegate;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTSectionControllerDelegate> sectionControllerDelegate; // @synthesize sectionControllerDelegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)didToggleAutoplay;
- (id)headerView;
- (void)valueDidChangeForKey:(id)arg1;
- (void)viewDidBecomeHidden;
- (void)viewWillBecomeVisible;
- (CDUnknownBlockType)cellNodeBlock;
- (Class)viewClass;
- (struct CGSize)viewSizeThatFits:(struct CGSize)arg1;
- (void)updateView:(id)arg1;
- (id)initWithShelfRenderer:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
