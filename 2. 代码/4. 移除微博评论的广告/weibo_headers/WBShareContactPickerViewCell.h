//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIView, WBContactAvatarView;

@interface WBShareContactPickerViewCell : UICollectionViewCell
{
    _Bool _isDarkStyle;
    _Bool _userTargetSelected;
    id _userTarget;
    WBContactAvatarView *_avatarView;
    UILabel *_screenNameLabel;
    UIView *_avatarLayerView;
}

@property(retain, nonatomic) UIView *avatarLayerView; // @synthesize avatarLayerView=_avatarLayerView;
@property(nonatomic) _Bool userTargetSelected; // @synthesize userTargetSelected=_userTargetSelected;
@property(retain, nonatomic) UILabel *screenNameLabel; // @synthesize screenNameLabel=_screenNameLabel;
@property(retain, nonatomic) WBContactAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) _Bool isDarkStyle; // @synthesize isDarkStyle=_isDarkStyle;
@property(retain, nonatomic) id userTarget; // @synthesize userTarget=_userTarget;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

