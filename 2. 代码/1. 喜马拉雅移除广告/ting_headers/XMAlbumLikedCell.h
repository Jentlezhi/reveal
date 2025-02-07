//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class TYAttributedLabel, UIButton, UIImageView, UILabel, XMAlbumCoverImageView, XMAlbumItem;
@protocol XMAlbumCellDelegate;

@interface XMAlbumLikedCell : XMTableViewCell
{
    XMAlbumCoverImageView *_coverImageView;
    TYAttributedLabel *_albumTitleTYLab;
    UILabel *_firstTrackLabel;
    UILabel *_updateTime;
    UIButton *_favBtn;
    UIButton *_rightButton;
    UIImageView *_playImgView;
    UILabel *_playLab;
    UIImageView *_totalCountImageView;
    UILabel *_totalCountLabel;
    _Bool _showFav;
    id <XMAlbumCellDelegate> _delegate;
    XMAlbumItem *_albumItem;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
+ (double)heightForAlbumItem:(id)arg1 showFav:(_Bool)arg2;
+ (double)height;
@property(nonatomic) _Bool showFav; // @synthesize showFav=_showFav;
@property(retain, nonatomic) XMAlbumItem *albumItem; // @synthesize albumItem=_albumItem;
@property(nonatomic) __weak id <XMAlbumCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)onDelete:(id)arg1;
- (void)onFavorite:(id)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

