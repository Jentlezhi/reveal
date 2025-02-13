//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, NSString, UIFont, UIImageView, UILabel;

@interface XMNewerFollowButton : UIView
{
    _Bool _followed;
    NSString *_title;
    UIFont *_titleFont;
    double _edgeSpace;
    UILabel *_titleLabel;
    UIImageView *_followIconView;
    NSMutableDictionary *_attributes;
}

@property(retain, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) UIImageView *followIconView; // @synthesize followIconView=_followIconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double edgeSpace; // @synthesize edgeSpace=_edgeSpace;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool followed; // @synthesize followed=_followed;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)adjustWidth;
- (void)setTitleColor:(id)arg1 image:(id)arg2 backgroundColor:(id)arg3 isFollowed:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

