//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WBSearchSuggestionData : NSObject
{
    NSString *_objectID;
    NSString *_containerID;
    NSString *_image;
    NSString *_title;
    NSString *_desc;
    NSString *_content;
    NSString *_type;
    NSString *_icon;
    NSString *_pageID;
    NSString *_categoryName;
    NSDictionary *_highlight;
    NSString *_rightPic;
    NSString *_rightWord;
    double _displayTime;
    NSDictionary *_titleStruct;
    NSString *_query_key;
}

+ (id)suggestionWithJSONObject:(id)arg1;
@property(copy, nonatomic) NSString *query_key; // @synthesize query_key=_query_key;
@property(retain, nonatomic) NSDictionary *titleStruct; // @synthesize titleStruct=_titleStruct;
@property(nonatomic) double displayTime; // @synthesize displayTime=_displayTime;
@property(copy, nonatomic) NSString *rightWord; // @synthesize rightWord=_rightWord;
@property(copy, nonatomic) NSString *rightPic; // @synthesize rightPic=_rightPic;
@property(retain, nonatomic) NSDictionary *highlight; // @synthesize highlight=_highlight;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
@property(copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithJSONObject:(id)arg1;

@end

