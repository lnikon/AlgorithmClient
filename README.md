<h1><a id="Family_of_Algorithms_0"></a>Family of Algorithms</h1>
<p>The goal of this project is to give opportunity to learn Strategy Design pattern<br>
and also use it to implement the family of algorithms which will be used from concrete class to sort and search elemenets in arrays.</p>
<h2><a id="About_Strategy_Pattern_5"></a>About Strategy Pattern</h2>
<p>This pattern allows you to change the behavior of class or it’s algorithms at runtime.<br>
Suppose, we’ve something like <em>Control Point</em> and we want to use to do some <em>actions</em><br>
depending on current <em>context</em>.<br>
In this diagram <strong>Context</strong> class will do the job of <em>Control Point</em> and let us to change the state of composed interface <strong>Strategy</strong> to support the polymorphic behavior.<br>
So, dependeing on context, <strong>Context</strong> class will call some of concrete implementations of <strong>Strategy</strong>, <em>at runtime</em>.<br>
<img src="https://3.bp.blogspot.com/-lLA72bPuayg/UpSset9RgLI/AAAAAAAABzY/XiBGqnG5L5E/s1600/Strategy1.png" alt="Image"></p>
<h1><a id="Class_Diagram_of_current_project_13"></a>Class Diagram of current project</h1>
<p><img src="https://github.com/lnikon/strategyPattern/blob/master/ClassDiagram1.png?raw=true" alt="Image"></p>
<h2><a id="What_we_have_16"></a>What we have</h2>
<p>At first, we’ve the family of algorithms, which implement interface <code>ISortAlgorithm</code>.<br>
<em>Composition over inheritance</em><br>
This family implements some of popular sorting algorithms.</p>
<ul>
<li>Bubble Sort</li>
<li>Insertions Sort</li>
<li>Merge Sort</li>
<li>Quick Sort</li>
<li>Heap Sort</li>
</ul>
<p>At second, we’ve interface <code>ISearchAlgorithm</code>.<br>
<code>BinarySearch</code> implements this interface.</p>
<h1><a id="Usage_example_29"></a>Usage example</h1>
<p><em>Tested under Visual Studio 2017</em></p>
<ul>
<li>
<p>At first, include header file, that allows to use our <em>Control Point</em>.<br>
<code>#include &quot;AlgorithmClient.h&quot;</code></p>
</li>
<li>
<p>After that, include some headers for sorting algortms, e.g. for merge sort.<br>
<code>#include &quot;MergeSortStrategy.h&quot;</code></p>
</li>
<li>
<p>Now, create instance of <code>AlgorithmClient</code> in the <code>main</code> function, allocate some array and use <code>FillRandomArray</code> function from <code>Util</code> class to fill that array with number.<br>
<code>AlgorithmClient alc;</code><br>
‘const int size = 10;’<br>
<code>int *pA = new int[size];</code><br>
<code>Util ut;</code><br>
<code>ut.FillRandomArray(pA);</code></p>
</li>
<li>
<p>Initialize instance of AlgorithmClient with concrete class strategy, in our case, with class, which implements merge sort, as follows.<br>
<code>alc.SetSortStrategy(new MergeSortStrategy());</code></p>
</li>
<li>
<p>After all, call <code>performSort(int*, cons int&amp;)</code> to sort our array.<br>
`alc.performSort(pA, SIZE);’</p>
</li>
<li>
<p>Print array<br>
<code>ut.printArray(pA, size);</code></p>
</li>
</ul>
<p>Urrah! Sorting is completed!</p>
<p><strong>Before sorting</strong><br>
<em>11  87  60  34  56  59   3  18  95  39</em><br>
<strong>After sorting</strong><br>
<em>3  11  18  34  39  56  59  60  87  95</em></p>
