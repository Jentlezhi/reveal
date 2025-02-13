//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImage;
@protocol XMEmoticonTabViewDelegate;

@interface XMEmoticonTabView : UIView
{
    _Bool _needReloadData;
    UIImage *_buttonBackgroundImageForSelected;
    id <XMEmoticonTabViewDelegate> _delegate;
    long long _selectedIndex;
    NSMutableArray *_buttonArray;
    NSMutableArray *_lineArray;
}

@property(retain, nonatomic) NSMutableArray *lineArray; // @synthesize lineArray=_lineArray;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <XMEmoticonTabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)imageOfColor:(id)arg1;
- (void)createLineWithCount:(long long)arg1;
- (void)createButtonWithCount:(long long)arg1;
- (void)reloadData;
- (void)reloadDataIfNeeds;
- (void)setNeedsReloadData;
- (void)layoutSubviews;
- (void)clickButton:(id)arg1;
- (void)didInitialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

