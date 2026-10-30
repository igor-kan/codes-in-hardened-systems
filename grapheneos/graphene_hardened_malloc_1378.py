"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1378."""

def spec_graphene_hardened_malloc_1378() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1378, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1378():
    s = spec_graphene_hardened_malloc_1378()
    assert s["spec_id"] == 1378
