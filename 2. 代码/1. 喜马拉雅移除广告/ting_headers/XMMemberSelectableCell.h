//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView, XMChatUserModel, XMWebImageView;

@interface XMMemberSelectableCell : UITableViewCell
{
    XMWebImageView *_coverImageView;
    UILabel *_nickNameLabel;
    UIImageView *_verifiedLogoView;
    UIImageView *_checkedImageView;
    UIView *_line;
    _Bool _isSelected;
    XMChatUserModel *_member;
}

+ (double)cellHeight;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) XMChatUserModel *member; // @synthesize member=_member;
- (void).cxx_destruct;
- (void)changeLineAtIndex:(long long)arg1 withCount:(long long)arg2;
- (void)layoutSubviews;
- (void)buildUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

