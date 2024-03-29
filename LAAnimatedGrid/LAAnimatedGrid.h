//
//  LAAnimatedGrid.h
//  LAAnimatedGridExample
//
//  Created by Luis Ascorbe on 18/12/12.
//  Copyright (c) 2012 Luis Ascorbe. All rights reserved.
//
/*
 
 LAAnimatedGrid is available under the MIT license.
 
 Copyright © 2012 Luis Ascorbe.
 
 Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 
 */

#import <UIKit/UIKit.h>

//                  HORIZONTAL
//      -------------------------------------
//      |        |                |         |
//      |    1   |                |    3    |
//      |        |                |         |
//      |--------|       2        |---------|
//      |        |                |         |
//      |        |                |         |
//      |        |                |         |
//      |   4    |----------------|    6    |
//      |        |                |         |
//      |        |       5        |         |
//      |        |                |         |
//      -------------------------------------

//                  VERTICAL
//      ---------------------------
//      |                 |       |
//      |        1        |   2   |
//      |                 |       |
//      |-------------------------|
//      |        |                |
//      |        |                |
//      |        |                |
//      |   3    |       4        |
//      |        |                |
//      |        |                |
//      |        |                |
//      |-------------------------|
//      |                 |       |
//      |        5        |   6   |
//      |                 |       |
//      ---------------------------

typedef enum
{
    LAAGOrientationHorizontal = 1,
    LAAGOrientationVertical
}LAAGOrientation;

@interface LAAnimatedGrid : UIView

// laagOrientation   -> Is used to perform the view in horizontal or vertical (Default: horizontal)
// arrImage          -> Image array (could be UIImages or NSURLs)
// placeholderImage  -> The placeholder image to show when the images are URLs

@property (nonatomic, assign) LAAGOrientation laagOrientation;
@property (nonatomic, strong) NSMutableArray *arrImages;
@property (nonatomic, strong) UIImage *placeholderImage;
@property (nonatomic, assign) int margin;
@property (nonatomic, strong) UIColor *laagBorderColor;
@property (nonatomic, strong) UIColor *laagBackGroundColor;



@end
