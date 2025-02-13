//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol WBStoryMusicMainListSegmentViewDelegate;

@interface WBStoryMusicMainListSegmentView : UIView
{
    UIButton *_hotMusicButton;
    UIButton *_recentlyUsedButton;
    id <WBStoryMusicMainListSegmentViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WBStoryMusicMainListSegmentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)disableItemAtIndex:(unsigned long long)arg1;
- (void)setCurrentSelectedIndex:(unsigned long long)arg1;
- (void)tapRecentlyUsedButton;
- (void)tapHotMusicButton;
- (id)init;

@end

