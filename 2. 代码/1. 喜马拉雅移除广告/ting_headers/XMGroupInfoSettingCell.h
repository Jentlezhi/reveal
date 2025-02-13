//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface XMGroupInfoSettingCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_contentLabel;
    UIImageView *_arrow;
    UIView *_line;
    _Bool _showArrow;
    _Bool _showLine;
    UIImageView *_redMark;
}

+ (double)heightForDetail:(id)arg1 content:(id)arg2;
@property(retain, nonatomic) UIImageView *redMark; // @synthesize redMark=_redMark;
@property(nonatomic) _Bool showLine; // @synthesize showLine=_showLine;
@property(nonatomic) _Bool showArrow; // @synthesize showArrow=_showArrow;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1 detail:(id)arg2 content:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

