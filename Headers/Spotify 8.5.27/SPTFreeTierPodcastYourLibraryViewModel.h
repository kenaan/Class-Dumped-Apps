//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol SPTPageCreationContext;

@interface SPTFreeTierPodcastYourLibraryViewModel : NSObject
{
    _Bool _compactMode;
    NSArray *_pagedViewControllers;
    id <SPTPageCreationContext> _context;
}

@property(retain, nonatomic) id <SPTPageCreationContext> context; // @synthesize context=_context;
@property(retain, nonatomic) NSArray *pagedViewControllers; // @synthesize pagedViewControllers=_pagedViewControllers;
@property(nonatomic, getter=isCompactMode) _Bool compactMode; // @synthesize compactMode=_compactMode;
- (void).cxx_destruct;
- (id)pageViewControllerAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPages;
- (id)initWithViewControllers:(id)arg1 context:(id)arg2 compactMode:(_Bool)arg3;

@end

