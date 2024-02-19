Objective
 Generating Minimum Cost Spanning tree using Prim’s Algorithm identifying the Optimal route for Delivering the Courier Parcels to Different Places.

Procedure
⦁	Construct adjacent matrix w to represent a graph with n places.
⦁	Select one starting place assume v1.
⦁	Construct two arrays “nearest” and “distance for the places.
⦁	Generate solution set w which contains places nearer to starting place.
⦁	Initialy solution set y will have starting place only nearest{i}.
⦁	Weight of i vi to the place nearer to nearest [i].
⦁	Initialy nearest of [i] or v1 for all places.
⦁	Initialy distance of i is w[1][i].
⦁	Find the minimum value in distance of [i] if the minimum value is corresponding to the place k (that is distance of k is minimum),then add the place vk to the solution set with the corresponding edge.
⦁	V1 to vk (here v1 is nearer to vk).
⦁	Update the array nearest [] and distance [] for the places not included in the solution set.
⦁	do the above two steps to find nearer place and the corresponding edge.
⦁	Repeat the above three steps (n-1) time to obtain minimum spanning tree.
