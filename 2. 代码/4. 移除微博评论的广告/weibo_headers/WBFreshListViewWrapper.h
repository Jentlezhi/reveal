//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBaseSegmentListViewWrapper.h"

@interface WBFreshListViewWrapper : WBBaseSegmentListViewWrapper
{
}

- (_Bool)allowForwardScrollEventToOriginVC:(SEL)arg1;
- (void)configSubviewsFrame:(struct CGRect)arg1;
- (Class)segmentBarClass;
- (Class)allowViewControllerClass:(Class)arg1;
- (void)refreshSegmentViewControllerAtIndex:(long long)arg1 refreshType:(unsigned long long)arg2;
- (void)swipeViewCurrentItemIndexDidChange:(id)arg1;
- (void)updateChildViewControllersWithChannelModels:(id)arg1 userInfo:(id)arg2;
- (void)configSegmentViewController:(id)arg1 atIndex:(long long)arg2;
- (void)initialize;

@end

