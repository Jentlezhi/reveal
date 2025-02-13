//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIButton, UILabel;
@protocol XMAlbumTitleTableViewCellDelegate;

@interface XMAlbumTitleTableViewCell : UITableViewCell
{
    id <XMAlbumTitleTableViewCellDelegate> _delegate;
    UILabel *_titleLab;
    UIButton *_rightButton;
    NSString *_type;
}

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(nonatomic) __weak id <XMAlbumTitleTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onRightButtonClicked:(id)arg1;
- (void)showRightButtonWithImage:(id)arg1 type:(id)arg2;
- (void)showRightButton:(_Bool)arg1;
- (double)getCellHeight;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

